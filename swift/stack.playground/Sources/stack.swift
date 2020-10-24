import Foundation

struct Stack<T> {
    private var storage: [T] = []
    public var isEmpty: Bool {
        get { return storage.isEmpty }
    }
    public init(_ elements: [T]) {
        storage = elements
    }
    mutating func push(_ element: T) {
        storage.append(element)
    }
    mutating func pop() -> T? {
        return storage.popLast()
    }
}
