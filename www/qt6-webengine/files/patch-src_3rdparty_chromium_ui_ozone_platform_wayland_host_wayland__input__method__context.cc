--- src/3rdparty/chromium/ui/ozone/platform/wayland/host/wayland_input_method_context.cc.orig	2024-09-30 07:45:04 UTC
+++ src/3rdparty/chromium/ui/ozone/platform/wayland/host/wayland_input_method_context.cc
@@ -60,7 +60,7 @@ namespace {
 // Only enable the preedit string for sequence mode (i.e. when using dead keys
 // or the Compose key) on Linux ozone/wayland (see b/220370007).
 constexpr CharacterComposer::PreeditStringMode kPreeditStringMode =
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     CharacterComposer::PreeditStringMode::kAlwaysEnabled;
 #else
     CharacterComposer::PreeditStringMode::kHexModeOnly;
