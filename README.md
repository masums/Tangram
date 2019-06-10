# Tangram Cloud-Desktop Application

[![Gitter](https://badges.gitter.im/TangramDev/Lobby.svg)](https://gitter.im/TangramDev/Lobby?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge)

Traditional desktop development has accumulated rich assets for so many years. In the face of the increasingly powerful cloud infrastructure, desktop development urgently needs a new software construction model to better utilize the advantages of the cloud. Tangram helps developers build a new Cloud-Desktop application. It deploys desktop components to the cloud and organizes and presents them using HTML.

## How to work?

[Video from Vimeo]

## Technology architecture

Tangram is based on three open source projects: chromium, eclipse, corefx. The Chromium is built into every application so that every application has all the features of a browser. Moreover, by extending the HTML model in chromium, developers can organize desktop technology components by writing special HTML tags. To enable HTML to support Java and .NET components, Tangram leverages the core technologies of eclipse and corefx to allow .NET and Java to work together in the one process.

## Advantages of Cloud-Desktop application

Cloud-Desktop application deploys the assembly of desktop applications to the cloud. With cloud infrastructure, applications can be better managed, scheduled, and distributed. Cloud-Desktop application follows the existing web development process to organize applications through HTML. It also leverages existing desktop technologies to enable developers to build applications based on desktop technology and web technology.

## Screenshots

[Screenshot]

## Quick Start

Prerequisites:

- Windows 10
- .NET Framework 4.0 or later
- *Optional:* Visual Studio 2019
  - Desktop development with C++
  - .NET desktop development

Download **tangram_sdk_vX.X.X.msi** and install as an administrator.

Download and unzip **tangram_vX.X.X_x64.zip** to a location of your choice. The version number should be the same as the SDK. The directory structure should look similar to:

```
C:\test\tangram
λ ls -l
total 4960
drwxr-xr-x 1 codemeow 197121       0 May 30 15:01 74.0.3729.108/
-rwxr-xr-x 1 codemeow 197121 1852928 May 30 15:01 tangramchromecore.dll*
-rwxr-xr-x 1 codemeow 197121  532480 May 30 15:01 tangramclr.dll*
-rwxr-xr-x 1 codemeow 197121 2339840 May 30 15:01 tangramcore.dll*
-rwxr-xr-x 1 codemeow 197121  338432 May 30 15:01 tangraminit.dll*

C:\test\tangram\74.0.3729.108
λ ls -l
total 191177
-rw-r--r-- 1 codemeow 197121      226 May 30 15:01 74.0.3729.108.manifest
-rwxr-xr-x 1 codemeow 197121 61646848 May 30 15:01 chrome.dll*
-rw-r--r-- 1 codemeow 197121  1222161 May 30 15:01 chrome_100_percent.pak
-rw-r--r-- 1 codemeow 197121  1556306 May 30 15:01 chrome_200_percent.pak
-rwxr-xr-x 1 codemeow 197121 89293312 May 30 15:01 chrome_child.dll*
-rwxr-xr-x 1 codemeow 197121   750080 May 30 15:01 chrome_elf.dll*
-rwxr-xr-x 1 codemeow 197121   779776 May 30 15:01 chrome_watcher.dll*
-rwxr-xr-x 1 codemeow 197121  4493352 May 30 15:01 d3dcompiler_47.dll*
drwxr-xr-x 1 codemeow 197121        0 May 30 15:01 Extensions/
-rw-r--r-- 1 codemeow 197121 10326064 May 30 15:01 icudtl.dat
-rwxr-xr-x 1 codemeow 197121   131072 May 30 15:01 libegl.dll*
-rwxr-xr-x 1 codemeow 197121  5516288 May 30 15:01 libglesv2.dll*
drwxr-xr-x 1 codemeow 197121        0 May 30 15:01 Locales/
drwxr-xr-x 1 codemeow 197121        0 May 30 15:01 MEIPreload/
-rw-r--r-- 1 codemeow 197121    83217 May 30 15:01 natives_blob.bin
-rwxr-xr-x 1 codemeow 197121   740864 May 30 15:01 notification_helper.exe*
-rw-r--r-- 1 codemeow 197121 12783180 May 30 15:01 resources.pak
drwxr-xr-x 1 codemeow 197121        0 May 30 15:01 swiftshader/
-rwxr-xr-x 1 codemeow 197121  1898496 May 30 15:01 tangramgpu.exe*
-rwxr-xr-x 1 codemeow 197121  1898496 May 30 15:01 tangramrenderer.exe*
-rwxr-xr-x 1 codemeow 197121  1898496 May 30 15:01 tangramutility.exe*
-rw-r--r-- 1 codemeow 197121   704192 May 30 15:01 v8_context_snapshot.bin
drwxr-xr-x 1 codemeow 197121        0 May 30 15:01 VisualElements/
```

Create a normal .NET Winform application `WindowsFormsApp1` and set build platform target to `x64`. Reference `TangramCLR.dll` from `C:\Windows\Microsoft.NET\assembly\GAC_64\TangramCLR\v4.0_1.0.1992.1963__1bcc94f26a4807a7\TangramCLR.dll`.

Add the following code to replace Winform's default message loop.

```
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
    	Tangram.OnGetTangramNtpXml += Tangram_OnGetTangramNtpXml;
    	Tangram.InitCloudApp(false);
	}
	else
	{
		Application.Run(new Form1());
	}
}
```

Build and into Output directory and usually the directory structure is as follows:

 ```
C:\Users\codemeow\source\repos\WindowsFormsApp1\bin\Debug
λ ls -l
total 37
-rwxr-xr-x 1 codemeow 197121  7168 May 31 10:17 WindowsFormsApp1.exe*
-rw-r--r-- 1 codemeow 197121   189 May 31 10:15 WindowsFormsApp1.exe.config
-rw-r--r-- 1 codemeow 197121 26112 May 31 10:17 WindowsFormsApp1.pdb
 ```

You need to copy all the contents of the Tangram package to the same directory as the executable (currently WindowsFormsApp1.exe). The directory structure look similar to:

```
C:\Users\codemeow\source\repos\WindowsFormsApp1\bin\Debug
λ ls -l
total 4997
drwxr-xr-x 1 codemeow 197121       0 May 31 10:25 74.0.3729.108/
-rwxr-xr-x 1 codemeow 197121 1852928 May 30 15:01 tangramchromecore.dll*
-rwxr-xr-x 1 codemeow 197121  532480 May 30 15:01 tangramclr.dll*
-rwxr-xr-x 1 codemeow 197121 2339840 May 30 15:01 tangramcore.dll*
-rwxr-xr-x 1 codemeow 197121  338432 May 30 15:01 tangraminit.dll*
-rwxr-xr-x 1 codemeow 197121    7168 May 31 10:17 WindowsFormsApp1.exe*
-rw-r--r-- 1 codemeow 197121     189 May 31 10:15 WindowsFormsApp1.exe.config
-rw-r--r-- 1 codemeow 197121   26112 May 31 10:17 WindowsFormsApp1.pdb
```



## Build from source

TODO

## Discussion

- Discuss Tangram on our [Gitter](https://gitter.im/TangramDev/Lobby)
- Visit our forum - https://www.tangram.dev/forum

## Contributing

We think that Tangram is a great idea, but now we are understaffed. We urgently need more developers to participate in our work. If you are interested in changing the world with us, please contact us.
