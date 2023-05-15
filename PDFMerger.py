import PyPDF2
import sys
import os

merger = pyPDF2.PdfFileMerger()

for file in os.listdir(os.curdir):
  if file.endswith(".pdf"):
    merger.append(file)
  merger.write("combinedBSUniDocs.pdf")

  
  # Copyright 2023, Peace Oloruntoba.
