public class Start {
    public static void main(String[] args){
        Dashboard2 d2 = new Dashboard2(Login ln, Dashboard d1);

        Login ln = new Login(d2);
        ln.setVisible(true);
    }
}
