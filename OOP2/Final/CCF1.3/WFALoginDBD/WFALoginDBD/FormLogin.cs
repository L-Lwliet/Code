using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace WFALoginDBD
{
    public partial class FormLogin : Form
    {
        public FormLogin()
        {
            InitializeComponent();
        }

        private void btnLogin_Click(object sender, EventArgs e)
        {
            string sql = "select * from UserInfo where Id = '" + this.txtUserID.Text + "' and Password = '" + this.txtPassword.Text + "';";
            SqlConnection sqlcon = new SqlConnection(@"Data Source=LAPTOP-HASIB;Initial Catalog=dspringdb;User ID=sa;Password=P@$$w0rd");
            sqlcon.Open();
            SqlCommand sqlcom = new SqlCommand(sql, sqlcon);
            SqlDataAdapter sda = new SqlDataAdapter(sqlcom);
            DataSet ds = new DataSet();
            sda.Fill(ds);

            if (ds.Tables[0].Rows.Count == 1)
            {
                MessageBox.Show("Valid Login");
                if (ds.Tables[0].Rows[0][3].ToString() == "admin")
                {
                    FormAdmin fa = new FormAdmin();
                    fa.Visible = true;
                }
                else
                {
                    FormUser fu = new FormUser();
                    fu.Show();
                }
            }
            else
            {
                MessageBox.Show("Invalid Login");
            }

            sqlcon.Close();

        }

        private void btnClear_Click(object sender, EventArgs e)
        {
            this.txtUserID.Clear();
            this.txtPassword.Clear();
        }

        private void btnView_Click(object sender, EventArgs e)
        {
            if (this.txtPassword.UseSystemPasswordChar)
                this.txtPassword.UseSystemPasswordChar = false;
            else
                this.txtPassword.UseSystemPasswordChar = true;
        }
    }
}


/*
 if (this.txtUserID.Text.ToLower() == "bruce" && this.txtPassword.Text == "123")
                MessageBox.Show("Valid User");
            else if (this.txtUserID.Text.ToLower() == "clerk" && this.txtPassword.Text == "456")
                MessageBox.Show("Valid User");
            else
                MessageBox.Show("Invalid User");
                //MessageBox.Show(ds.Tables[0].Rows[0][0].ToString());

    bool f = false;
            int index = 0;
            while (index < ds.Tables[0].Rows.Count)
            {
                if (this.txtUserID.Text == ds.Tables[0].Rows[index][0].ToString() && this.txtPassword.Text == ds.Tables[0].Rows[index][2].ToString())
                {
                    MessageBox.Show("Valid Login");
                    f = true;
                    break;
                }
                index++;
            }
            if(!f)
                MessageBox.Show("Invalid Login");
*/
