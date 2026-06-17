import javax.swing.*;  
import java.awt.event.*;  
import java.awt.*;

public class Sample{  
      
   
	JLabel ls1;
    Sample(){  
        JFrame f= new JFrame(); 
		ls1 = new JLabel("WELCOME!");
		ls1.setBounds(150,150,100,30);
        ls1.setOpaque(false);
        ls1.setForeground(Color.RED);

		
        
		f.add(ls1);
        
        f.setSize(400,400);  
        f.setLayout(null);  
        f.setVisible(true);  
    }         
      
}