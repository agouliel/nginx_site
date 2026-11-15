import java.awt.*;
import javax.swing.*;

public class DisplayImage extends JApplet {
  public DisplayImage() {
    getContentPane().add(new ImagePanel());
  }
class ImagePanel extends JPanel {
  Class metaObject = this.getClass();
  java.net.URL url = metaObject.getResource("images/cosmos.jpg");
  ImageIcon imageIcon = new ImageIcon(url);
  Image image = imageIcon.getImage();
  public void paintComponent(Graphics g) {
    super.paintComponent(g);
    if (image != null) g.drawImage(image, 0, 0, getWidth(), getHeight(), this);
  }
}

}
