def christmas_tree(rows):
    for i in range(rows):
        for j in range(rows-i, 0, -1):
            print(' ', rows="")
        for k in range(2*i+1):
            print('*', rows="")
        print()

if __name__ == "__main__":
    christmas_tree(10)