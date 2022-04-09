static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class      instance    title       tags mask     isfloating   monitor */
  { "Nitrogen", NULL,       NULL,       0,            1,           -1 },
  { "Thunar",   NULL,       NULL,       0,            1,           -1 },
  { "Lxappearance", "lxappearance", NULL,       0,    1,           -1 },
  { "Blueman-manager", "blueman-manager", NULL, 0,    1,           -1 },
  { "Pavucontrol", "pavucontrol", NULL, 0,            1,           -1 },
  { "Zathura", "org.pwmt.zathura", "org.pwmt.zathura", 0, 1,       -1 },
  { "TelegramDesktop", "telegram-desktop", "Telegram",  0, 1,      -1 },
  { "st-256color", "st-256color", NULL, 0,            1,           -1 },
	{ "GSu",			"yad",			"Password",	0,						1,					 -1 },
  { "SimpleScreenRecorder", "simplescreenrecorder", "SimpleScreenRecorder", 0, 1, -1 },
};
