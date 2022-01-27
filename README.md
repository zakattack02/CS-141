Howdy! ㋡

## Here are a few helpful terminal commands!

Download file via SSH: `scp your_username_here@some_domain.edu:~/path/to/file.txt local/dir/`

Print your working directory: `pwd`

Go up one directory: `cd -`

Show which jobs are active: `jobs`

Copy file to other file / directory: `cp /path/to/file.txt /target/path/`

Open nano, a simple and easy text editor: `nano file_to_edit.extension

## Some keyboard commands

Ctrl-z will pause a job and return to terminal

Ctrl-c will kill the current job 

`fg` brings the most recent job back to the foreground

## How to get to class notes

	
I maybe haven't made this clear: when I'm doing coding examples in class, I'm putting them all in a public directory so you can refer back to them whenever you want. The code should all be accessible in

~cthorpe/public/141

You can cd to that directory, do ls to see what's in there, use more to look at each .cpp file.

If you want to play with them, copy them back to your home directory. For example

cp lightning.cpp ~ 

will copy the lightning code back to ~, which is an abbreviation for your home directory.

Then you can do

cd

which (with no arguments) gets you back to your own home directory, and you should have the file there and be able to edit it and compile it and play with it.
