using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace AbstractVSInterface
{
    public abstract class Product
    {
        private int Date = 15;
        private int Exp;

        public abstract void ProductB1();

        public void ProductB2()
        {
            MessageBox.Show("Go up 2" + Date.ToString());
        }
    }
}
