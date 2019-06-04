using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;
using TangramCLR;

namespace WindowsFormsApp1
{
    static class Program
    {
        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            if (Tangram.CloudAppSupport)
            {
                Tangram.OnCloudAppInit += Program_OnCloudAppInit;
                Tangram.OnGetTangramNtpXml += Tangram_OnGetTangramNtpXml;
                Tangram.InitCloudApp(false);
            }
            else
            {
                Application.Run(new Form1());
            }
        }

        private static string Tangram_OnGetTangramNtpXml(string strKey)
        {
            return File.ReadAllText("..\\App1.xml", System.Text.Encoding.UTF8);
        }

        private static void Program_OnCloudAppInit()
        {
            MDIParent1 thisForm = new MDIParent1();
            thisForm.Show();
        }
    }
}
