HTML
	Include the doctype: <!DOCTYPE html>

	Put a meta tag with correct charset in the head: <meta charset="utf-8">

	Don't forget to use validators!
		HTML: http://validator.w3.org/
		CSS: http://jigsaw.w3.org/css-validator/

	Link CSS stylesheet in the head:
		<link rel="stylesheet" href="main.css">

	Don't use headings just to make the text big or bold!

	Special character endcodings: http://copypastecharacter.com/

CSS
	CSS Resets - CSS resets take every common HTML element with a predefined style and provide one unified style for all browsers. These resets generally involve removing any sizing, margins, paddings, or additional styles and toning these values down.

	Basic: http://meyerweb.com/eric/tools/css/reset/
	Advanced: http://necolas.github.io/normalize.css/

	selectors w/ higher specificity take precedence no matter where they appear in the CSS cascade
	ex) id > class

	best practice: don't preface a class selector with a type selector

	rgba() includes a fourth value for color transparency - a decimal value between 0 and 1

	LENGTHS

		pixel = 1/96th of an inch

		percentages - need to know the length of parent element

		em units: single em = element's font size, commonly used for styling text

BOX MODEL

	DISPLAY
		inline, inline-block, block, none

		none hides element and any nested elements

	total width: margin-right + border-right + padding-right + width + padding-left + border-left + margin-left

	total height: margin-top + border-top + padding-top + height + padding-bottom + border-bottom + margin-bottom

	Width
		block-level elements have a default width of 100%
		inline-level elements CANNOT have a fixed size

	Vertical margins are not accepted by inline-level elements

	Borders: width, style, color

FLOAT
	float changes the elements to block if they aren't already

	Floats can be cleared or contained

	Clearfix (AKA cf)

		.group:before,
		.group:after {
		  content: "";
		  display: table;
		}
		.group:after {
		  clear: both;
		}
		.group {
		  clear: both;
		  *zoom: 1;
		}

Ways to remove whitespace from between inline-block elements:
	*put closing and opening tags right next to each other
	*add a comment right between opening and closing tags:
		</section><!--
		--><section>

Position - use this property to precisely position elements
