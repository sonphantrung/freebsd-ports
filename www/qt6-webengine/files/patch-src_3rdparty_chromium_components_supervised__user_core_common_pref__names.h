--- src/3rdparty/chromium/components/supervised_user/core/common/pref_names.h.orig	2024-07-30 11:12:21 UTC
+++ src/3rdparty/chromium/components/supervised_user/core/common/pref_names.h
@@ -137,7 +137,7 @@ inline constexpr char kFirstTimeInterstitialBannerStat
     "profile.managed.banner_state";
 
 #if BUILDFLAG(ENABLE_EXTENSIONS)
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // An integer pref that stores the current state of the local extension
 // parent approval migration when the feature
 // `kEnableSupervisedUserSkipParentApprovalToInstallExtensions` becomes enabled.
