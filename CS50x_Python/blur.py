from PIL import Image, ImageFilter

before = Image.open("Predator.jpg")
after = before.filter(ImageFilter.BoxBlur(30))
after.save("out.jpg")