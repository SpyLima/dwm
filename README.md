<center> <h1>DWM</h1> </center>

<center>

### my dwm config with catppuccin theme

## : Preview :

<img src="./.assets/preview.png" />

## : Patches :

| Name | Function |
|:------:|:----------|
| AlwaysCenter | Centralize windows in floating layout |
| AttachAsideAndBelow | Spawn stack in side master and below |
| AutoStart | Execute `autostart.sh` in ~/.dwm/ |
| FocusOnMouse | Move mouse to selected monitor on focusmon |
| FocusUrgent | Add keybind to focus on an urgent window |
| MoveStack | Enable move the stack window  `MOD + Up/Down` |
| RestartSig | Restart DWM without close him |
| SysTray | Show tray on right side |
| UselessGap | Enable gaps when have 2+ windows in same tag |
| WinIcon | Enable show window icons ( dependencie: `imlib2` ) |
| HideVacant | Hide empty tags |
| MoveCenter | Move floating window to center `MOD + Space` |

## : Dependencies :

``` dmenu, alacritty, kitty [optional], ttf-hack, ttf-joypixels, libxft-bgra, picom, feh, nerd-fonts-complete [AUR - optional] ```

## : Installing :

</center>

```
git clone https://github.com/spylima/dwm ~/config/dwm
cd ~/.config/dwm 
sudo cp ./dwm.desktop /usr/share/xsessions/
sudo make clean Install
mkdir ~/.dwm 
mv ./autostart.sh ~/.dwm/
```

## : Keybinds :

### Main

| Keybinding | Action |
|:------------:|:--------|
| Mod + 1-9 | switch to workspace [1-5] |
| Mod + Shift + 1-9 | move focused window to [1-5] |
| Mod + 0 | See all opened windows |
| Mod + Shift + 0 | Fix window |
| Mod + D | dmenu |
| Mod + Enter | st |
| Mod + Shift + Enter | kitty |
| Mod + Shift + R | Restart DWM | 
| Mod + Shift + Esc | Quit DWM |

### Layout

| Keybinding | Action |
|:------------:|:--------|
| Mod + Tab | Change between last focus |
| Mod + Space | Center Window |
| Mod + Shift + Space | Chage floating |
| Mod + Up-Down | Change focus |
| Mod + Shift + Up-Down | Move focused window |
| Mod + Left-Right | Change side area size |
| Mod + C | Close focused window |
| Mod + B | Hide or Show bar |
