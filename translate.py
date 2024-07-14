from googletrans import Translator

text_to_translate = "Hello, how are you?"
target_language = "hi"  # hindi
translator = Translator()
translation = translator.translate(text_to_translate, dest=target_language)

print("Translated text:", translation.text)
