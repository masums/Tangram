using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;
using TangramCLR;

namespace BuildChromium
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
            // Check if the dependent files is ready.
            if (Tangram.CloudAppSupport)
            {
                // Use the message loop of Chromium to take over the application.
                Tangram.InitCloudApp(false);
            }
            else
            {
                // Use the default message loop.
                Application.Run(new Form1());
            }
        }
    }
}
