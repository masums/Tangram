# Tangram Cloud-Desktop Application

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
- .NET Framework 4.5 or later
- *Optional:* Visual Studio 2017 or newer

Download **tangram_sdk_vX.X.X.msi** and install as an administrator.

Download and unzip **tangram_vX.X.X_x64.zip** to a location of your choice. The version number should be the same as the SDK. The directory structure should look similar to:

```
D:\src\omahaopensource\omaha>ls -l
total 16
----rwx---+ 1 sorin Domain Users 752 Jul 14 12:27 README.md
d---rwx---+ 1 sorin Domain Users   0 Jun 30 17:58 common
d---rwx---+ 1 sorin Domain Users   0 Jul 15 11:34 omaha
d---rwx---+ 1 sorin Domain Users   0 Jun 30 17:58 third_party

d:\src\omahaopensource\omaha>ls -l third_party
total 16
d---rwx---+ 1 sorin          Domain Users 0 Jul 14 12:52 breakpad
drwxrwx---+ 1 Administrators Domain Users 0 Sep  1 11:52 googletest
d---rwx---+ 1 sorin          Domain Users 0 Aug  7 18:58 lzma
```

A precompiled executable WindowsFormsApp1.exe has been included in the package.

## Build from source

TODO

## Discussion

- Discuss Tangram on our Gitter
- Visit our forum - https://www.tangram.dev/forum

## Contributing

We think that Tangram is a great idea, but now we are understaffed. We urgently need more developers to participate in our work. If you are interested in changing the world with us, please contact us.