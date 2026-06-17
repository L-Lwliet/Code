import java.lang.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Dashboard2 extends JFrame implements ActionListener{
    JButton pButton, loButton, ext2Button;
    JPanel panel2;
    Login ln;
    Dashboard d1;

    public Dashboard2(Login ln, Dashboard d1){
        this.setSize(300, 300);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        this.ln = ln;
        this.d1 = d1;

        panel2 = new JPanel();
        panel2.setLayout(null);

        //Previous Button
        pButton = new JButton("Previous");
        pButton.setBounds(20, 90, 106, 30);
        pButton.setOpaque(true);
        pButton.setBackground(Color.BLUE);
        pButton.setForeground(Color.WHITE);
        panel2.add(pButton);

        //Logout Button
        loButton = new JButton("Logout");
        loButton.setBounds(140, 90, 106, 30);
        loButton.setOpaque(true);
        loButton.setBackground(Color.BLUE);
        loButton.setForeground(Color.WHITE);
        loButton.addActionListener(this);
        panel2.add(loButton);

        //Exit Button
        ext2Button = new JButton("Exit");
        ext2Button.setBounds(80, 140, 106, 30);
        ext2Button.setOpaque(true);
        ext2Button.setBackground(Color.BLUE);
        ext2Button.setForeground(Color.WHITE);
        ext2Button.addActionListener(this);
        panel2.add(ext2Button);

        this.add(panel2);
    }

    public void actionPerformed(ActionEvent ae){
        
        String command = ae.getActionCommand();
        
        if(loButton.getText().equals(command)){
            ln.setVisible(true);
            this.setVisible(false);

        }
        else if(pButton.getText().equals(command)){
            d1.setVisible(true);
            this.setVisible(false);
        }
        
        else if(ext2Button.getText().equals(command)){
            System.exit(0);
        }
        else{}
    }
}
