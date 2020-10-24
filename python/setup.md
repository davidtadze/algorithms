# setup

assuming mac os

## python

```
brew install python
```

now you can run python programms with the following command command:

```
python3
```

## jupyter notebook

for live code

```
pip3 install notebook
```

now you can run the notebook with the following command:

```
jupyter notebook
```

## pycodestyle

1. to install `pycodestyle` :

   ```
   pip3 install pycodestyle pycodestyle_magic flake8
   ```

2. place this command at the beginning of a notebook:

   ```
   %load_ext pycodestyle_magic
   ```

3. now you can use `%%pycodestyle` in a cell to check your code against PEP8 standard

## .gitignore

don't forget to add the following lines to  `.gitignore`:

```
.ipynb_checkpoints
```

