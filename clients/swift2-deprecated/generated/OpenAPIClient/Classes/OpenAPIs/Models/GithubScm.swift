//
// GithubScm.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class GithubScm: JSONEncodable {
    public var _class: String?
    public var links: GithubScmlinks?
    public var credentialId: String?
    public var id: String?
    public var uri: String?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["_links"] = self.links?.encodeToJSON()
        nillableDictionary["credentialId"] = self.credentialId
        nillableDictionary["id"] = self.id
        nillableDictionary["uri"] = self.uri
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
