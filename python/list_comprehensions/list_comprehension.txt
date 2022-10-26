

def listgen_example():
    """TODO: Docstring for listgen_example.
    :returns: TODO list.

    """
    john = {
        'name': 'john',
        'car': 'audi'
    }

    jake = {
        'name': 'jake',
        'car': 'bmw'
    }

    users = [jake, john]

    cars = [person['car'] for person in users]
    return cars


if __name__ == '__main__':
    print(listgen_example())
