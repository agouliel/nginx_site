# Instructions
1. `brew install nginx`
2. `cd /opt/homebrew/var/www`
3. `git init`
4. `git remote add origin git@github.com:agouliel/nginx_site.git`
5. `git fetch`
6. `git checkout -f main`
7. `cd /opt/homebrew/etc/nginx`
8. `ln -s /opt/homebrew/var/www/nginx.conf nginx.conf` (or use the default `nginx.conf` and add a cloudflare tunnel for `localhost:8080`)
9. `ln -s /opt/homebrew/var/www/paths.conf paths.conf`
10. copy other static files to nginx home (`/opt/homebrew/var/www`)

# Description
Two distinct architectural approaches for remote access. The first uses a traditional **Reverse Proxy with Port Forwarding**, while the second uses a modern **Zero Trust Tunnel**.

In the first setup, the router acts as a gatekeeper. When a request hits the public IP (managed dynamically by `no-ip.com`) on port 443, the router "forwards" it to the Mac mini. The `nginx.conf` then looks at the `Host` header to decide which `server` block to use, and then it uses the `location` (path) to decide which `proxy_pass` to trigger. This means no third-party interception and no content restrictions, but it also means security risks and configuration overhead (Let's Encrypt renewals).

In the second solution, the `cloudflared` utility on the Mac mini establishes an outbound connection to Cloudflare. Users connect to Cloudflare’s global network, and Cloudflare sends that traffic down the established "tunnel" to the machine.

# Servers
1. `agouliel.ddns.net:80`: redirect any requests to the same URL but on `https`
2. `agouliel.ddns.net:443` (HTTPS)
3. `www.goulielmos.org:80`: in this case, we are sending unencrypted traffic locally inside the Mac mini (the tunnel itself is already encrypted)
4. `goulielmos.org:443`: this does not exist in `nginx.conf`, only in Cloudflare dashboard. It forwards to `https://localhost` and requires the `"Origin Server Name"` setting to be `"agouliel.ddns.net"`. This setting tells the tunnel: "Even though the user typed `goulielmos.org` in their browser, when you connect to the Mac mini, tell Nginx that you are looking for `agouliel.ddns.net`." This "tricks" Nginx into matching the request to the existing HTTPS server block. Nginx is configured with `ssl_certificate fullchain.pem` which is tied to the `agouliel.ddns.net` domain.

# Web page
**Glassmorphism** card design, using a modern **sans-serif typeface**, and with some subtle hover effects. Also includes a script to handle the dynamic links so they adapt to whatever host we're using.

1. Typography: **"Inter"** (the gold standard for modern tech resumes).
2. Visual Hierarchy: bold labels and smaller muted text for "Previous" companies to keep the interface clean.
3. Responsive Card: floats nicely on desktop but scales to full-width on mobile.
4. The JavaScript at the bottom looks at `window.location.origin`.
5. Interactive Elements: hover scales on the profile picture and color shifts on the project buttons
