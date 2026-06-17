import java.lang.*;
import javax.swing.*; 
import java.awt.*;
import java.awt.event.*;
import static javax.swing.JOptionPane.showMessageDialog;

public class Login extends JFrame implements ActionListener{
    JLabel uLabel, pLabel;
    JTextField uTF;
    JPasswordField pTF;
    JButton lnButton, fpButton, snuButton, extButton;
    JPanel panel1;
    Color btnColor;
    Dashboard2 d2;

    Login(Dashboard2 d2){
        this.setSize(300, 300);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        this.d2 = d2;


        btnColor = new Color(30, 100, 255);

        panel1 = new JPanel();
        panel1.setLayout(null);

        //Labels
        uLabel = new JLabel("Username: ");
        uLabel.setBounds(15, 30, 80, 30);
        panel1.add(uLabel);
        
        pLabel = new JLabel("Password: ");
        pLabel.setBounds(15, 80, 100, 30);
        panel1.add(pLabel);

        //TextFields
        uTF = new JTextField();
        uTF.setBounds(100, 30, 150, 30);
        panel1.add(uTF);

        pTF = new JPasswordField();
        pTF.setBounds(100, 80, 150, 30);
        panel1.add(pTF);

        //Login Button
        lnButton = new JButton("Login");
        lnButton.setBounds(20, 150, 106, 30);
        lnButton.setOpaque(true);
        lnButton.setBackground(btnColor);
        lnButton.setForeground(Color.WHITE);
        lnButton.addActionListener(this);
        panel1.add(lnButton);

        //Forgot Pass Button
        fpButton = new JButton("Forgot Pass");
        fpButton.setBounds(140, 150, 106, 30);
        fpButton.setOpaque(true);
        fpButton.setBackground(btnColor);
        fpButton.setForeground(Color.WHITE);
        panel1.add(fpButton);

        //Sign Up Button
        snuButton = new JButton("Sign Up");
        snuButton.setBounds(20, 200, 106, 30);
        snuButton.setOpaque(true);
        snuButton.setBackground(btnColor);
        snuButton.setForeground(Color.WHITE);
        panel1.add(snuButton);

        //Exit Button
        extButton = new JButton("Exit");
        extButton.setBounds(140, 200, 106, 30);
        extButton.setOpaque(true);
        extButton.setBackground(btnColor);
        extButton.setForeground(Color.WHITE);
        extButton.addActionListener(this);
        panel1.add(extButton);

        this.add(panel1);
    }

    //Action Event
    public void actionPerformed(ActionEvent ae){
        
        String command = ae.getActionCommand();
        
        if(lnButton.getText().equals(command)){
            String s1 = uTF.getText();
            String s2 = pTF.getText();
            if(s1.equals("Jayed") && s2.equals("jayed12")){
                Dashboard d1 = new Dashboard(this, d2);
                d1.setVisible(true);
                this.setVisible(false);
            }
            else{
                showMessageDialog(null, "Invalid username or password!!");
            }
        }
        
        else if(extButton.getText().equals(command)){
            System.exit(0);
        }
        else{}
    }
}