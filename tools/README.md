# Tools

This folder contains some simple tools for the development of this open source project.

## Update Headers

To update the license info in the header of the files run this command in the root folder of this project:

```bash
find . -type f \( -iname \*.h -o -iname \*.cpp \)  -exec ./tools/add_header.sh {} ./tools/header.txt  \;
```