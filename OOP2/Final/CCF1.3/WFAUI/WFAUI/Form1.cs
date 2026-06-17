using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WFAUI
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_MouseHover(object sender, EventArgs e)
        {
            this.button1.BackColor = Color.Gold;
        }

        private void button1_MouseLeave(object sender, EventArgs e)
        {
            this.button1.BackColor = SystemColors.Control;//Color.Aqua;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            ColorDialog cd = new ColorDialog();
            if (cd.ShowDialog() == DialogResult.OK)
                this.panel1.BackColor = cd.Color;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            UserControl1 uc1 = new UserControl1();
            this.panel2.Controls.Add(uc1);
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            UserControl1 uc1 = new UserControl1();
            this.panel2.Controls.Add(uc1);
        }
    }
}
