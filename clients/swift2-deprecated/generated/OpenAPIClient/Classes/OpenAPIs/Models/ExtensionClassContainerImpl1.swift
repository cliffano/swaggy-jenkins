//
// ExtensionClassContainerImpl1.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ExtensionClassContainerImpl1: JSONEncodable {
    public var _class: String?
    public var links: ExtensionClassContainerImpl1links?
    public var map: ExtensionClassContainerImpl1map?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["_links"] = self.links?.encodeToJSON()
        nillableDictionary["map"] = self.map?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
