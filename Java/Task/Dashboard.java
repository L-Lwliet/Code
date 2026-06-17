import javax.swing.*;  
import java.awt.event.*;  
import java.awt.*;
public class Dashboard extends JFrame {

    Login ln;
    JFrame f;
    JCheckBox cb1,cb2,cb3,cb4;
    JRadioButton r1;
    JRadioButton r2;
    ImageIcon ic ;
    JComboBox cbr;
    JLabel l1,l2,l3,l4;
    JButton b1,b2,b3;
    Dashboard2 d2;

    Dashboard(Login ln, Dashboard2 d2) {
    f=new JFrame("DashBoard1");

    this.d2 = d2;
    this.ln = ln;
    
    ic= new ImageIcon("yae.jpg");
    l2 =new JLabel(ic);
    l2.setBounds(25, 80, 172, 240);

    l1= new JLabel("Elegant Yae Miko from Genshin Impact");
    l1.setBounds(25,50,250,30); 
    
    l3= new JLabel("Do you play Genshin Impact ?");
    l3.setBounds(25,330,300,30);

    l4= new JLabel("What games do you play ?");
    l4.setBounds(300, 100, 150, 50);
    
    JRadioButton r1=new JRadioButton("A) Yes");    
    JRadioButton r2=new JRadioButton("B) No");    
    r1.setBounds(25,360,100,30);    
    r2.setBounds(25,380,100,30);
    
    
    String Language[]={"English","Bangla","Nordic","Swedish"};        
    cbr =new JComboBox<String>(Language);    
    cbr.setBounds(480, 00,100,20); 

    cb1= new JCheckBox("Apex legends");
    cb1.setBounds(400, 150, 150, 50);
    cb2= new JCheckBox("Valorant");
    cb2.setBounds(300, 150, 100, 50);
    cb3= new JCheckBox("Warzone");
    cb3.setBounds(300, 200, 100, 50);
    cb4= new JCheckBox("Genshin Impact");
    cb4.setBounds(400, 200, 150, 50);


    b1=new JButton("Next");
    b1.setBounds(100, 420, 100, 30);
    b1.setBackground(Color.BLUE);
    b1.setForeground(Color.WHITE);
    b2=new JButton("Previous");
    b2.setBounds(400, 420, 100, 30);
    b2.setBackground(Color.BLUE);
    b2.setForeground(Color.WHITE);
    b3=new JButton("Exit");
    b3.setBounds(250, 470, 100, 30);
    b3.setBackground(Color.BLUE);
    b3.setForeground(Color.WHITE);
    
    f.add(cb1);
    f.add(cb2);
    f.add(cb3);
    f.add(cb4);
    f.add(r1);
    f.add(r2);
    f.add(cbr);
    f.add(l1);
    f.add(l2);
    f.add(l3);
    f.add(l4);
    f.add(b1);
    f.add(b2);
    f.add(b3);
    f.setSize(600,600);
    f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);  
    f.setLayout(null); 
    f.setVisible(true); 
    b1.addActionListener(new ActionListener() {
        public void actionPerformed(ActionEvent arg0) {
            Dashboard2 d2 = new Dashboard2(ln, this);   
            f.setVisible(false); 
            d2.setVisible(true);
        }
    });
    b2.addActionListener(new ActionListener() {
        public void actionPerformed(ActionEvent arg0) {
            Login log = new Login();   
            f.setVisible(false); 
            log.setVisible(true);
        }
    });
    b3.addActionListener(new ActionListener() {
        public void actionPerformed(ActionEvent arg0) {
           System.exit(0);
        }
    });
        
    
    

    
}
}