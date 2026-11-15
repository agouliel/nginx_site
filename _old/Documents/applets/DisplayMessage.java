import javax.swing.*;

public class DisplayMessage extends JApplet {
  public void init() {
    String message = getParameter("MESSAGE");
    getContentPane().add(new JLabel(message, JLabel.CENTER));
  }
}