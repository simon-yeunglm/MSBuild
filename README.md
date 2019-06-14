# Custom MSBuild
A sample project of using custom MSBuild files to compile shaders.  
More info can be found on my [blog](http://simonstechblog.blogspot.com/2019/06/msbuild-custom-build-tools-notes.html).  

### Build files notes
The MSBuild files are located under directory:

    code/sln/engine/engineShaders/buildRule/

It can recongize .vsh file (vertex shader) and .psh file (pixel shader) in visual studio.  
During compilation, it will output intermediate files .vbj/.pbj (compiled by dxc.exe) and .vjs/.pjs (JSON meta data of shader) into directory:

    code/build/$(PlatformShortName)/$(Configuration)/engine/engineShaders/

And then combining those intermediate files into a serialized file .vso/.pso inside directory:

    code/bin/$(PlatformShortName)/$(Configuration)/engine/engineShaders/

Finally those files will be copied to an asset folder, maintaining same folder hierarchy as the source directory:

    assets/package/engine/shaders/

