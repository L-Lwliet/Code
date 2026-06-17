using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WFAUI
{
    public partial class UserControl1 : UserControl
    {
        int i = 1;
        public UserControl1()
        {
            InitializeComponent();
        }

        private void UserControl1_Load(object sender, EventArgs e)
        {
            this.pictureBox1.Image = Image.FromFile("C:\\Users\\HASIB\\Dropbox\\AIUB\\21. Summer 2021-22\\OOP-2\\Projects\\Image\\1.jpg");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.timer1.Start();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            this.progressBar1.Value += 20;
            if (this.progressBar1.Value >= 100)
            {
                //this.timer1.Stop();
                this.progressBar1.Value = 0;

                if (i == 3)
                    i = 0;

                this.pictureBox1.Image = Image.FromFile("C:\\Users\\HASIB\\Dropbox\\AIUB\\21. Summer 2021-22\\OOP-2\\Projects\\Image\\"+(++i)+".jpg");
                
            }
        }

        private void changeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (i == 4)
                i = 1;
            else 
                i = 4;
            this.pictureBox1.Image = Image.FromFile("C:\\Users\\HASIB\\Dropbox\\AIUB\\21. Summer 2021-22\\OOP-2\\Projects\\Image\\" + i + ".jpg");

        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void editToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }
    }
}
