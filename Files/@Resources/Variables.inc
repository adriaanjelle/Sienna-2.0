[Variables]
WeatherLocation=Amsterdam
; Just enter your city's name or your address here or whatever. Anything should work here.
; NOTE: Check Rainmeter's log to see what location it got.

WeatherUnits=Metric
; The units of the weather info. Valid values are "Metric" and "Imperial".

Language=[&mSystemLocale]
; Set the language of the weather information and names of the days.
; See https://learn.microsoft.com/nl-nl/openspecs/windows_protocols/ms-lcid/a9eac961-e77d-41a6-90a5-ce1a8b0cdb9c for valid values under the 'language tag' column.
; Not all values may work properly.
; NOTE: use "[&mSystemLocale]" to let it use the currently set system language.

24HTime=True
; Enable or disable 24-hour time.
; Valid values are "True" and "False".

; ================================================

Scale=1.00
; A size multiplier for the entire skin. Please stick to increments of 0.25.

Font=Roboto Flex Normal
; The font used in the skin.

WeatherCurrentIconStyle=Color
WeatherDailyIconStyle=Mono
; The style of the weather icons for the "current" and forecast parts of the skin. Valid values are "Color" and "Mono".
; The Mono icons are embedded in the JDWI.ttf font and the Color icons are found in "@Resources\WeatherIcons".

Shadow=True
; Show a shadow and border around the skin or not.
; Valid values are "True" and "False".

; ================================================

WeatherCurrentBackgroundColor=0, 0, 0, (255*0.25)
WeatherCurrentFontColor=255, 255, 255
; The color of the "current" part of the skin.
; Valid values are formatted "RRR, GGG, BBB, AAA" with values of 0-255.
; NOTE: Please do not define the alpha value for the font color.

WeatherDailyBackgroundColor=0, 0, 0, (255*0.5)
WeatherDailyFontColor=255, 255, 255
; The color of the forecast part of the skin.
; Valid values are formatted "RRR, GGG, BBB, AAA" with values of 0-255.
; NOTE: Please do not define the alpha value for the font color.
