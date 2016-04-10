# MetaProp
C++ object metadata compiler & access system

## Why?

C++ has no built-in support for object metadata, property iteration, smart automated structure dumping etc.
This project tries to makes that easier.

## Usage

- Download [SGScript virtual machine](http://www.sgscript.org/#download), unpack somewhere & add to PATH.
- Put `mpdgen.sgs` in virtual machine directory.
- Describe your data structures as shown in the [metaprop.mpd.sgs](metaprop.mpd.sgs) file.
- Add compile step `sgsvm -p mpdgen <input_sgs> > <output_h>`
- Include generated `<output_h>` in your source code after structure definitions
- For detailed usage examples, please see [metaprop.cpp](metaprop.cpp).

## Features

- Property enumeration, search
- Property access (read/write, optional getters & setters)
- Access by index (like `operator []`, optional getters & setters)
- Structure printing (`mpd_DumpInfo`)
- Data printing (`mpd_DumpData`)
- Data structure traversal
- `enum` info access
- C++03 & C++11 support
