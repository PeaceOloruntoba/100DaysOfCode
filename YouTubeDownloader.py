from pytube import YouTube
from sys import argv

link = argv[1]
yt = YouTube(link)
print("Title: ", yt.title)
print("Views: ", yt.views)
yd = yt.streams.get_highest_resolution()
yd.download("dir_path_to_store_your_downloaded_video")



# Copyright 2023, Peace Oloruntoba.
