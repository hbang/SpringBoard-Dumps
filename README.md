# SpringBoard dumps
SpringBoard. **All the way back to 2.0.**

## Navigation and Diffing
To navigate on GitHub, go to [the master branch](https://github.com/hbang/SpringBoard-Dumps/tree/master), and then click the "branch: master" dropdown followed by the "Tags" tab. Note that pages may load very slowly due to the large number of files, and diffs may be big enough that files further down in the list won’t be shown.

It’s better to clone this repo to your computer and use `git diff`. See the man pages [git-diff(1)](http://git-scm.com/docs/git-diff) and [git-difftool(1)](http://git-scm.com/docs/git-difftool).

## Firmwares
* [2.0](https://github.com/hbang/SpringBoard-Dumps/tree/2.0)
* [2.1](https://github.com/hbang/SpringBoard-Dumps/tree/2.1)
* [3.0](https://github.com/hbang/SpringBoard-Dumps/tree/3.0)
* [3.1](https://github.com/hbang/SpringBoard-Dumps/tree/3.1)
* [3.2](https://github.com/hbang/SpringBoard-Dumps/tree/3.2)
* [4.0](https://github.com/hbang/SpringBoard-Dumps/tree/4.0)
* [4.1](https://github.com/hbang/SpringBoard-Dumps/tree/4.1)
* [4.2](https://github.com/hbang/SpringBoard-Dumps/tree/4.2)
* [4.3](https://github.com/hbang/SpringBoard-Dumps/tree/4.3)
* [5.0](https://github.com/hbang/SpringBoard-Dumps/tree/5.0)
* [5.1](https://github.com/hbang/SpringBoard-Dumps/tree/5.1)
* [6.0](https://github.com/hbang/SpringBoard-Dumps/tree/6.0)
* [6.1](https://github.com/hbang/SpringBoard-Dumps/tree/6.1)
* [7.0](https://github.com/hbang/SpringBoard-Dumps/tree/7.0)
* [7.0.3](https://github.com/hbang/SpringBoard-Dumps/tree/7.0.3)

## Doing it yourself
The makefile is designed to support any iOS or OS X binary by only changing a variable or two, however do keep in mind that there’s already [nst/iOS-Runtime-Headers](https://github.com/nst/iOS-Runtime-Headers) for public/private frameworks and libraries.

1. Have [class-dump-z](https://code.google.com/p/networkpx/wiki/class_dump_z) in a directory in your `$PATH`.
2. Be on a clean git branch with no previous commits.
3. Edit the makefile to change the `BINARYPATH` to where your SpringBoard binaries are stored. The file names must be of the format `SpringBoard70`. You must also have a binary for every version listed in `FIRMWARES`.
4. `make`.
5. Be amazed at how long it takes.

## License
Headers are public domain. The makefile is [Apache 2 licensed](https://www.apache.org/licenses/LICENSE-2.0.html).
