import javax.swing.*;  
import java.awt.event.*;  
import java.awt.*;
import static javax.swing.JOptionPane.showMessageDialog;
public class TextFieldExample extends JFrame implements ActionListener{  
    
	JFrame f;

    JLabel l1;
	JLabel l2, l3;	
	
	JTextField tf1;  
    JTextField tf2;

    JCheckBox cb1, cb2;

    JComboBox<String> cmb1;
	
    JButton b1; 
    
    Color fColor;
    Font pFont;
	
    TextFieldExample(){  
        

        fColor = new Color(37, 41, 88);
        pFont = new Font(Font.SANS_SERIF, Font.PLAIN, 20);

        f= new JFrame(); 

        String Languages[] = {"English(US)", "English(UK)", "Bangla"};
        cmb1 = new JComboBox<String>(Languages);
        cmb1.setBounds(210, 20, 94, 30);
        f.add(cmb1);

        l3 = new JLabel("Login to your account");
        l3.setBounds(450, 70, 210, 30);
        l3.setOpaque(false);
        l3.setForeground(Color.BLUE);
        l3.setFont(pFont);
        f.add(l3);

		l1 = new JLabel("Username: ");
		l1.setBounds(40,115,100,30);
        l1.setOpaque(false);
        l1.setForeground(Color.RED);

		l2 = new JLabel("Password: ");
		l2.setBounds(40,165,100,30); 
        l2.setOpaque(false);
        l2.setForeground(Color.RED);		
		
        tf1=new JTextField();  
        tf1.setBounds(107,115,200,30);  
		
		tf2=new JTextField();  
        tf2.setBounds(107,165,200,30); 

        cb1 = new JCheckBox("Remember password");
        cb1.setBounds(38, 215, 250, 30);
        f.add(cb1);

        cb2 = new JCheckBox("Keep me logged in");
        cb2.setBounds(38, 247, 250, 30);
        f.add(cb2);
          
        b1=new JButton("Login");  
        b1.setBounds(40,300,100,30);
        b1.setOpaque(true);
        b1.setBackground(Color.BLUE);
        b1.setForeground(Color.WHITE);  
        b1.addActionListener(this);
		
		f.add(l1);
		f.add(l2);
        f.add(tf1);
        f.add(tf2);
		f.add(b1); 
        f.setSize(400,400);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);  
        f.setLayout(null); 
        f.setBackground(fColor);
        f.setFont(pFont); 
        f.setVisible(true);  
    }         
    public void actionPerformed(ActionEvent e) {  
         
        if(e.getSource()==b1)
		{  
			String user = tf1.getText();
			String pass = tf2.getText();
            if(user.equals("Mazid") && pass.equals("1234"))
			{
				f.setVisible(false);
				new Sample();
			}
			else
			{
				showMessageDialog(null, "Invalid Username or password!");
			}
			
        }  
    }  
} 