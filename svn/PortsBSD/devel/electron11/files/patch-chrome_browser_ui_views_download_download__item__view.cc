--- chrome/browser/ui/views/download/download_item_view.cc.orig	2021-01-07 00:36:25 UTC
+++ chrome/browser/ui/views/download/download_item_view.cc
@@ -190,7 +190,7 @@ bool UseNewWarnings() {
 }
 
 int GetFilenameStyle(const views::StyledLabel& label) {
-#if !defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if !defined(OS_LINUX) && !defined(OS_CHROMEOS) && !defined(OS_BSD)
   if (UseNewWarnings())
     return STYLE_EMPHASIZED;
 #endif
