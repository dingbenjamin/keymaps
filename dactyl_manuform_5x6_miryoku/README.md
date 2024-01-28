Instructions:

You need to checkout the miryoku branch and make the git submodule before building this keymap

See https://github.com/manna-harbour/miryoku_qmk/tree/miryoku/users/manna-harbour_miryoku

Copy over the `config.h` keymap to the default miryoku keymap for dactyl_manuform which will:
* Set the master side of the split to be the right side
* Swap the location of one of the thumb cluster buttons

Finally run the following command

```
qmk flash -c -kb handwired/dactyl_manuform/5x6 -km manna-harbour_miryoku \
  -e MIRYOKU_ALPHAS=QWERTY \
  -e MIRYOKU_EXTRA=QWERTY \
  -e MIRYOKU_TAP=QWERTY \
  -e MIRYOKU_CLIPBOARD=MAC \
  -e MIRYOKU_NAV=VI
```
