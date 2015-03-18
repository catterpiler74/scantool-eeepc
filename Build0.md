# Introduction #

All the changes in the code are marked with a EEEPC\_BUILD0 build flag.

# Details #

The original ScanTool would not run on EEE-PC's native resolution of 800x480 because it is hardcoded to run at 640x480.

http://scantool-eeepc.googlecode.com/files/cannot_set_video.JPG

The old fonts for sensor outputs are too small. By enlarging the fonts, it creates another problem because the strings would be too wide.

http://scantool-eeepc.googlecode.com/files/original_layout.JPG

The new layout has less sensors per page and bigger fonts. This should increase readability when used inside of a vehicle esepcially while driving.

http://scantool-eeepc.googlecode.com/files/new_layout.JPG