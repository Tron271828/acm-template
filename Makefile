TEXFLAGS=-synctex=1 -interaction=nonstopmode

all:
	xelatex $(TEXFLAGS) main.tex
	xelatex $(TEXFLAGS) main.tex

clean:
	-rm main.aux main.log main.out main.pdf main.synctex.gz main.toc
