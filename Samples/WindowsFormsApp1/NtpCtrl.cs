﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class NtpCtrl : UserControl
    {
        public NtpCtrl()
        {
            InitializeComponent();
        }

        private void Button1_Click(object sender, EventArgs e)
        {
            TangramCLR.Tangram.CreateBrowser(System.IntPtr.Zero, "https://www.tangram.dev/cloud/newtangrampage.html|");
        }
    }
}
