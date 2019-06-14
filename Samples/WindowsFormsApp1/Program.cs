using System;
using System.Collections.Generic;
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
                //Tangram.OnCloudAppInit += Program_OnCloudAppInit;
                //Tangram.OnInitTangramApp += Tangram_OnInitTangramApp;
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
            return "<tangram><window><node id='splitter' name='container' rows='1' cols='2' height ='100,100,' width='300,500,' borderwidth='0' splitterwidth='4' middlecolor='RGB(240,240,240)'><node name='launcher' id='ClrCtrl' cnnid='WindowsFormsApp1.NtpCtrl,WindowsFormsApp1' caption='' borderwidth='0' /><node name='host' caption='host' id='hostview' borderwidth='0' /></node></window></tangram>";
        }

        private static IntPtr Tangram_OnInitTangramApp()
        {
            MDIParent1 thisForm = new MDIParent1();
            thisForm.Text = "main form";
            thisForm.Show();
            return thisForm.Handle;
        }

        private static void Program_OnCloudAppInit()
        {
            MDIParent1 thisForm = new MDIParent1();
            thisForm.Show();
        }
    }
}
