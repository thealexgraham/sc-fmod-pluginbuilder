sc-fmod-pluginbuilder
=====================
by Alex Graham

Automatically builds FMOD plugins that communicate with SuperCollider Synths over OSC

Preperation
-------------
1. Copy C:\Windows\Microsoft.Net\Framework64\v4.0.30319\MSBuild.exe into the pluginbuilder directory.
2. Open SCBuilder/fmod-osc.sln in Visual Studio 2010 (could possibly work in other versions). You can close after that
3. Change the FMOD Plugin directory in templates/build-template.bat to your FMOD plugin directory.

Check out the buildertest.scd for an example of usage. **Make plugin-builder.bat in the pluginbuilder directory after running the generateCode() command!!!**

If you have any questions, please feel free to email me at alex@alexgraham.net.
