using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace AbstractVSInterface
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            Product product = new ProductA();
            product.ProductB1();
            product.ProductB2();

            Interface inter = new Interface();
        }
    }
}
