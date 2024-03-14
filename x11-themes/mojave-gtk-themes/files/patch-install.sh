--- install.sh.orig	2024-03-14 20:16:41.104472000 +0700
+++ install.sh	2024-03-14 20:17:11.342696000 +0700
@@ -188,9 +188,6 @@
   cp -r "${SRC_DIR}/assets/xfwm4/assets${color}/"*'.png'                                     "${THEME_DIR}/xfwm4"
   cp -r "${SRC_DIR}/main/xfwm4/themerc${color}"                                              "${THEME_DIR}/xfwm4/themerc"
   
-  mkdir -p                                                                                   "${THEME_DIR}/unity"
-  cp -r "${SRC_DIR}/assets/unity/assets/"*'.png'                                             "${THEME_DIR}/unity"
-
   mkdir -p                                                                                   "${THEME_DIR}/cinnamon"
   sassc $SASSC_OPT "${SRC_DIR}/main/cinnamon/cinnamon${color}${opacity}.scss"                "${THEME_DIR}/cinnamon/cinnamon.css"
   cp -r "${SRC_DIR}/assets/cinnamon/common-assets"                                           "${THEME_DIR}/cinnamon/assets"
