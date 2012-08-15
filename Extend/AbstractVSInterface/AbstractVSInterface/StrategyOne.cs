using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace AbstractVSInterface
{
    public class StrategyOne : Interface
    {
        public int age
        {
            get
            {
                throw new NotImplementedException();
            }
            set
            {
                throw new NotImplementedException();
            }
        }

        public void Go()
        {
            throw new NotImplementedException();
        }

        public void Study()
        {
            throw new NotImplementedException();
        }

        public event EventHandler TouchUp;
    }
}
