//
// GithubFile.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class GithubFile: JSONEncodable {

    public var content: GithubContent?
    public var _class: String?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["content"] = self.content?.encodeToJSON()
        nillableDictionary["_class"] = self._class

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

