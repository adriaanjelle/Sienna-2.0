[Variables]
WeatherLocation=Amsterdam
; Just enter your city's name or your address here or whatever. Anything should work here.
; TIP: Check Rainmeter's log to see what location it got.

WeatherUnits=Metric
; The units of the weather info. Valid values are "Metric" and "Imperial".

Language=en
; The language code for the weather information. Most languages are supported, but it's not guaranteed to work.
; Recommended and working values are (kind of grouped by area):
; "en" (English),
; "de" (German), "nl" (Dutch), "fr" (French), "es" (Spanish), "pt" (Portuguese), "it" (Italian),
; "sv" (Swedish), "no" (Norwegian), "fi" (Finnish), "da" (Danish),
; "ar" (Arabic), "tr" (Turkish),"hr" (Croatian), "el" (Greek), "cs" (Czech),
; "ru" (Russian), "pl" (Polish), "ro" (Romanian), "sk" (Slovak), "uk" (Ukrainian),"et" (Estonian), "hu" (Hungarian),
; "zh" (Chinese),"ja" (Japanese), "ko" (Korean), "th" (Thai), "vi" (Vietnamese), "hi" (Hindi), "bn" (Bangla).

24HTime=True
; Enable or disable 24-hour time.
; Valid values are "True" and "False".

; ================================================

Font=Roboto Flex Normal
; The font used in the skin.

CurrentIconStyle=Color
ForecastIconStyle=Mono
; The style of the weather icons for the "current" and forecast parts of the skin. Valid values are "Color" and "Mono".
; The Mono icons are embedded in the JDWI.ttf font and the Color icons are found in "@Resources\WeatherIcons".

Shadow=True
; Show a shadow and border around the skin or not.
; Valid values are "True" and "False".

; ================================================

Scale=1.00
; A size multiplier for the entire skin. Please stick to increments of 0.25.

CurrentBackgroundColor=0, 0, 0, (255*0.25)
CurrentFontColor=255, 255, 255
; The color of the "current" part of the skin.
; Valid values are formatted "RRR, GGG, BBB, AAA" with values of 0-255.
; NOTE: Please do not define the alpha value for the font color.

ForecastBackgroundColor=0, 0, 0, (255*0.5)
ForecastFontColor=255, 255, 255
; The color of the forecast part of the skin.
; Valid values are formatted "RRR, GGG, BBB, AAA" with values of 0-255.
; NOTE: Please do not define the alpha value for the font color.
