//
// GithubRespositoryContainerlinks.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class GithubRespositoryContainerlinks: JSONEncodable {
    public var _self: Link?
    public var _class: String?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["self"] = self._self?.encodeToJSON()
        nillableDictionary["_class"] = self._class
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
