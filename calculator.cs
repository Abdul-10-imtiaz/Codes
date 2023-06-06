using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace GPA_Calculator
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void comboBox2_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void comboBox3_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void comboBox4_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void comboBox5_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void comboBox6_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox4_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox5_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox6_TextChanged(object sender, EventArgs e)
        {

        }
        bool RangeCheck(uint range)
        {
            if(range >= 0 && range <= 100)    return true;
            else    return false;
        }
        private void button1_Click(object sender, EventArgs e)
        {
            
            uint[] marks = new uint[6] { 0, 0, 0, 0, 0, 0 };
            float[] grades = new float[6] { 0, 0, 0, 0, 0, 0 };
            float totalGrades = 0.0f;
            uint crHour = 0;
            if( uint.TryParse(textBkox1.Text, out marks[0]) && uint.TryParse(textBox2.Text, out marks[1]) && uint.TryParse(textBox3.Text, out marks[2]) && uint.TryParse(textBox4.Text, out marks[3]) && uint.TryParse(textBox5.Text, out marks[4]) && uint.TryParse(textBox6.Text, out marks[5]))
            {
                for (int i = 1; i < 7; i++)
                {
                    string textBoxName = "textBox" + i;
                    string comboBoxName = "comboBox" + i;
                    string checkBoxName = "checkBox" + i;

                    if ( RangeCheck(marks[i - 1]) )
                    {
                        TextBox textBox = (TextBox)this.Controls.Find(textBoxName, true).FirstOrDefault();
                        ComboBox comboBox = (ComboBox)this.Controls.Find(comboBoxName, true).FirstOrDefault();
                        CheckBox checkBox = (CheckBox)this.Controls.Find(checkBoxName, true).FirstOrDefault();

                        if (textBox != null && comboBox != null && checkBox != null)
                        {
                            if (!checkBox.Checked)
                            {
                                if(comboBox.SelectedItem != null)
                                {
                                    if (marks[i - 1] <= 100 && marks[i - 1] >= 80)
                                    {
                                        grades[i - 1] = 4.0f;
                                    }
                                    else if (marks[i - 1] <= 79 && marks[i - 1] >= 70)
                                    {
                                        float temp = marks[i - 1] % 10;
                                        grades[i - 1] = 3.0f + (temp / 10.0f);
                                    }
                                    else if (marks[i - 1] <= 69 && marks[i - 1] >= 60)
                                    {
                                        float temp = marks[i - 1] % 10;
                                        grades[i - 1] = 2.0f + (temp / 10.0f);

                                    }
                                    else if (marks[i - 1] <= 59 && marks[i - 1] >= 50)
                                    {
                                        float temp = marks[i - 1] % 10;
                                        grades[i - 1] = 1.0f + (temp / 10.0f);
                                    }
                                    else
                                    {
                                        grades[i - 1] = 0;
                                    }
                                    crHour += uint.Parse(comboBox.SelectedItem.ToString());
                                    totalGrades += grades[i - 1] * uint.Parse(comboBox.Text);
                                }
                                else
                                {
                                    label10.Text = "0.0";
                                    MessageBox.Show("You Must Select Credit Hours");
                                    break;
                                }
                            }
                            else
                            {
                                continue;
                            }
                        }
                        else
                        {
                            break;
                        }
                    }
                    else
                    {
                        label10.Text = "0.0";
                        MessageBox.Show("Please Enter Number From 0 - 100 Only!");
                        break;
                    }
                }
                totalGrades /= crHour;
                if(float.IsNaN(totalGrades))
                {
                    label10.Text = "0.0";
                }
                else
                {
                    label10.Text = totalGrades.ToString("0.####");
                }
            }
            else if( textBox1.Text == "" || textBox2.Text == "" || textBox3.Text == "" || textBox4.Text == "" || textBox5.Text == "" || textBox6.Text == "")
            {
                label10.Text = "0.0";
                MessageBox.Show("Fields Shouldn't be Left Empty!");
            }
            else
            {
                label10.Text = "0.0";
                MessageBox.Show("Enter Positive Integers Only!");
            }
        }
        private void button2_Click(object sender, EventArgs e)
        {
            for (int i = 1; i < 7; i++)
            {
                string textBoxName = "textBox" + i;
                string comboBoxName = "comboBox" + i;
                string checkBoxName = "checkBox" + i;

                TextBox textBox = (TextBox)this.Controls.Find(textBoxName, true).FirstOrDefault();
                ComboBox comboBox = (ComboBox)this.Controls.Find(comboBoxName, true).FirstOrDefault();
                CheckBox checkBox = (CheckBox)this.Controls.Find(checkBoxName, true).FirstOrDefault();

                if (textBox != null && comboBox != null && checkBox != null)
                {
                    textBox.ResetText();
                    comboBox.SelectedItem = null;
                    checkBox.Checked = false;
                    label10.Text = "0.0";
                }
                else
                {
                    break;
                }
            }
        }
        private void button3_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox1.Checked) { textBox1.Text = "0"; }
            else { textBox1.Text = ""; }
        }

        private void checkBox2_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox2.Checked) { textBox2.Text = "0"; }
            else { textBox2.Text = ""; }
        }

        private void checkBox3_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox3.Checked) { textBox3.Text = "0"; }
            else { textBox3.Text = ""; }
        }

        private void checkBox4_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox4.Checked) { textBox4.Text = "0"; }
            else { textBox4.Text = ""; }
        }

        private void checkBox5_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox5.Checked) { textBox5.Text = "0"; }
            else { textBox5.Text = ""; }
        }

        private void checkBox6_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox6.Checked) { textBox6.Text = "0"; }
            else { textBox6.Text = ""; }
        }
    }
}
