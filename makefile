PYTHON = fibonacci.py
all: run
run:
	@echo "Executando o script Python..."
	python3 $(PYTHON_SCRIPT) 15

html:
	@echo "Abrindo o arquivo index.html no navegador..."
  xdg-open $(HTML_FILE) || open $(HTML_FILE) 2>/dev/null
	@echo "O arquivo HTML está pronto."

clean:
	@echo "Limpando.."

.PHONY: all run html clean
