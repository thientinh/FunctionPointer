using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace AbstractVSInterface
{
    public class ProductA : Product
    {
        public override void ProductB1()
        {
            MessageBox.Show("Go up B1");
        }
    }
}
