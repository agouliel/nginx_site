import javax.swing.*;
import java.awt.*;

public class DisplayMessageMethod extends JApplet {
  private Label m_mess;

  public void init() {
    setBackground(Color.lightGray);
    setLayout(new BorderLayout());
    m_mess = new Label("Start", Label.CENTER);
    add(BorderLayout.CENTER, m_mess);
  }
  public void setMessage(String message) {
    m_mess.setText(message);
  }
}
